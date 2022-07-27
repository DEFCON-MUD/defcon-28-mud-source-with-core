inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 50, 9 }));
  set_short( "Corridor - x57y50z9" );
set_objects( DIR+"/monsters/queenslug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y50z9.c",
  "south" : DIR+"/rooms/x57y49z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
