inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 60, 5 }));
  set_short( "Passage - x33y60z5" );
set_objects( DIR+"/monsters/norman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y61z5.c",
  "south" : DIR+"/rooms/x33y59z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
