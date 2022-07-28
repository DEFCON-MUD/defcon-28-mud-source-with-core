inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 48, 4 }));
  set_short( "Corridor - x47y48z4" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y48z4.c",
  "north" : DIR+"/rooms/x47y49z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
