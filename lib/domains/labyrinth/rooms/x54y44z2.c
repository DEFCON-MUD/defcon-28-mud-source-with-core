inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 44, 2 }));
  set_short( "Hallway - x54y44z2" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y44z2.c",
  "east" : DIR+"/rooms/x55y44z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
