inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 50, 8 }));
  set_short( "Hallway - x49y50z8" );
set_objects( DIR+"/monsters/olasha.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y51z8.c",
  "south" : DIR+"/rooms/x49y49z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
