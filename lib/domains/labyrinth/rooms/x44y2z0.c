inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 2, 0 }));
  set_short( "Hallway - x44y2z0" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y2z0.c",
  "east" : DIR+"/rooms/x45y2z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
