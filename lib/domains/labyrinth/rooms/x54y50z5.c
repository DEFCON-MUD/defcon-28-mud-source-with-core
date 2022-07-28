inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 50, 5 }));
  set_short( "Hallway - x54y50z5" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y50z5.c",
  "east" : DIR+"/rooms/x55y50z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
