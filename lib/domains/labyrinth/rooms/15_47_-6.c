inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 15, 47, -6 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Hallway" );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^" );

  set_objects(
    DIR+"/npc/Gl0Rz0.c"
  );
 set_exits( ([
  "south" : DIR+"/rooms/15_48_-6.c",
  "north" : DIR+"/rooms/15_46_-6.c"
  ]) );

}

