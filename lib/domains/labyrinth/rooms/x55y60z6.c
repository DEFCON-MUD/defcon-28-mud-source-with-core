inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 60, 6 }));
  set_short( "Hallway - x55y60z6" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y60z6.c",
  "east" : DIR+"/rooms/x56y60z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
