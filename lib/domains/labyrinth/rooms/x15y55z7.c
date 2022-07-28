inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 55, 7 }));
  set_short( "Corridor - x15y55z7" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y56z7.c",
  "south" : DIR+"/rooms/x15y54z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
