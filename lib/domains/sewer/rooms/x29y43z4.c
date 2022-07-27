inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 43, 4 }));
  set_short( "Corridor - x29y43z4" );
set_objects( DIR+"/monsters/sparrow.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y44z4.c",
  "south" : DIR+"/rooms/x29y42z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the radioactive waste in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
