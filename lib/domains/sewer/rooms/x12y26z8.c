inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 26, 8 }));
  set_short( "Hallway - x12y26z8" );
set_objects( DIR+"/monsters/baboon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y26z8.c",
  "east" : DIR+"/rooms/x13y26z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
