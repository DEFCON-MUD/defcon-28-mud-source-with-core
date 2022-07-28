inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 26, 9 }));
  set_short( "Hallway - x45y26z9" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y26z9.c",
  "south" : DIR+"/rooms/x45y25z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
