inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 32, 8 }));
  set_short( "Passage - x57y32z8" );
set_objects( DIR+"/monsters/Gl0Rz0.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y32z8.c",
  "south" : DIR+"/rooms/x57y31z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the radioactive waste in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
