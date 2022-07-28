inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 46, 0 }));
  set_short( "Hallway - x21y46z0" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y46z0.c",
  "east" : DIR+"/rooms/x22y46z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
