inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 47, 1 }));
  set_short( "Passage - x39y47z1" );
set_objects( DIR+"/monsters/child.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y48z1.c",
  "south" : DIR+"/rooms/x39y46z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the radioactive waste in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
