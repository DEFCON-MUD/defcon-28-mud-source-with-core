inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 15, 2 }));
  set_short( "Corridor - x53y15z2" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y16z2.c",
  "south" : DIR+"/rooms/x53y14z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
