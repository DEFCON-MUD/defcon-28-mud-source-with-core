inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 5, 43, -1 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Labyrinth" );
  set_long( "This is a wide corridor, illuminated only by the green glow of the pile of GPU's that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^" );

  set_objects(
    DIR+"/npc/enforcer.c"
  );
 set_exits( ([
  "south" : DIR+"/rooms/5_44_-1.c",
  "north" : DIR+"/rooms/5_42_-1.c"
  ]) );

}

