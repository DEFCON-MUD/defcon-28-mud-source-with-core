inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 45, 47, -5 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Hallway" );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the sludge in this pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^" );

  set_objects(
    DIR+"/npc/technician.c"
  );
 set_exits( ([
  "south" : DIR+"/rooms/45_48_-5.c",
  "north" : DIR+"/rooms/45_46_-5.c"
  ]) );

}

