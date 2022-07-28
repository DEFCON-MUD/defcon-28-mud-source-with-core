inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 62, 8 }));
  set_short( "Hallway - x53y62z8" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y62z8.c",
  "east" : DIR+"/rooms/x54y62z8.c",
  "north" : DIR+"/rooms/x53y63z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
