inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 26, 5 }));
  set_short( "Hallway - x60y26z5" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y26z5.c",
  "east" : DIR+"/rooms/x61y26z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
