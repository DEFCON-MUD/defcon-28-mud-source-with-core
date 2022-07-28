inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 10, 5 }));
  set_short( "Hallway - x49y10z5" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y10z5.c",
  "north" : DIR+"/rooms/x49y11z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the radioactive waste in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
