inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 14, 8 }));
  set_short( "Corridor - x18y14z8" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y14z8.c",
  "east" : DIR+"/rooms/x19y14z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
