inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 36, 8 }));
  set_short( "Corridor - x41y36z8" );
set_objects( DIR+"/monsters/antoinnete.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y36z8.c",
  "south" : DIR+"/rooms/x41y35z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
