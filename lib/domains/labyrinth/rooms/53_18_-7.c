inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 53, 18, -7 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Hallway" );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^" );

  set_objects(
    DIR+"/npc/stoner.c"
  );
 set_exits( ([
  "south" : DIR+"/rooms/53_19_-7.c",
  "north" : DIR+"/rooms/53_17_-7.c"
  ]) );

}

