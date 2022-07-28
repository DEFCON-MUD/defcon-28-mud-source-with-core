inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 4, 8 }));
  set_short( "Corridor - x33y4z8" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y4z8.c",
  "south" : DIR+"/rooms/x33y3z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
