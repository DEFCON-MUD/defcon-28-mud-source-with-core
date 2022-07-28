inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 24, 0 }));
  set_short( "Corridor - x55y24z0" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y24z0.c",
  "north" : DIR+"/rooms/x55y25z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
