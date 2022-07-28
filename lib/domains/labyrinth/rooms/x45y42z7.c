inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 42, 7 }));
  set_short( "Corridor - x45y42z7" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y42z7.c",
  "south" : DIR+"/rooms/x45y41z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
