//
// Created by alan tong
//

#ifndef __BIMAP_H__
#define __BIMAP_H__

#include <map>

/** Simple Bimap implementation, with only STL dependency
 */
template <typename key_t, typename val_t>
class bimap
{
	public:
    typedef std::map<key_t, val_t>	key_map_type;
    typedef std::map<val_t, key_t>	val_map_type;

    void insert(const key_t &key, const val_t &value)
	  {
        m_val_map[key] = val;
		    m_key_map[val] = key;
    }

    bool find_key(const key_t& key) const 
    {
        return m_key_map.find(key) != m_key_map.end();
    }

    bool find_val(const val_t& value) const 
    {
        return m_val_map.find(value) != m_val_map.end();
    }

    unsigned long size() const
    {
        return m_key_map.size();
    }
private:

    key_map_type m_key_map;
    val_map_type m_val_map;
};


#endif //__BIMAP_H__
