inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 10, 8 }));
  set_short( "Corridor - x54y10z8" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y10z8.c",
  "east" : DIR+"/rooms/x55y10z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
