inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 13, 42, -7 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Passage" );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the radioactive waste in this pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^" );

  set_objects(
    DIR+"/npc/stoner.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/12_42_-7.c",
  "south" : DIR+"/rooms/13_43_-7.c",
  "east" : DIR+"/rooms/14_42_-7.c",
  "north" : DIR+"/rooms/13_41_-7.c"
  ]) );

}

