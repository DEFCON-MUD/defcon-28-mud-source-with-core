inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 33, 42, -1 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Passage" );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^" );

  set_objects(
    DIR+"/npc/glorzo.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/32_42_-1.c",
  "south" : DIR+"/rooms/33_43_-1.c"
  ]) );

}

