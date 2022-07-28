inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 42, 4 }));
  set_short( "Hallway - x7y42z4" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y42z4.c",
  "east" : DIR+"/rooms/x8y42z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
