inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 26, 6 }));
  set_short( "Corridor - x55y26z6" );
set_objects( DIR+"/monsters/raddyzoon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y26z6.c",
  "south" : DIR+"/rooms/x55y25z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
