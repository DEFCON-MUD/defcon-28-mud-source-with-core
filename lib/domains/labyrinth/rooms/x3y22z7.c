inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 22, 7 }));
  set_short( "Corridor - x3y22z7" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y23z7.c",
  "south" : DIR+"/rooms/x3y21z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the radioactive waste in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
