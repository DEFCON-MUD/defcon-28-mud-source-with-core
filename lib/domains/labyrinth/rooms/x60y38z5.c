inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 38, 5 }));
  set_short( "Hallway - x60y38z5" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y38z5.c",
  "east" : DIR+"/rooms/x61y38z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
