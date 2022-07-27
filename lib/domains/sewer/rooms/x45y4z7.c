inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 4, 7 }));
  set_short( "Hallway - x45y4z7" );
set_objects( DIR+"/monsters/queenslug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y4z7.c",
  "south" : DIR+"/rooms/x45y3z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crappy sales material in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
