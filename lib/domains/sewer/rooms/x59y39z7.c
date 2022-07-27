inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 39, 7 }));
  set_short( "Corridor - x59y39z7" );
set_objects( DIR+"/monsters/randy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y40z7.c",
  "south" : DIR+"/rooms/x59y38z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
