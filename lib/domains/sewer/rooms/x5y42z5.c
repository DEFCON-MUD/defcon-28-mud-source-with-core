inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 42, 5 }));
  set_short( "Corridor - x5y42z5" );
set_objects( DIR+"/monsters/fieldmouse.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y42z5.c",
  "south" : DIR+"/rooms/x5y41z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the radioactive waste in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
