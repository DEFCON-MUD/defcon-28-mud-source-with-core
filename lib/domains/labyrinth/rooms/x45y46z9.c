inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 46, 9 }));
  set_short( "Corridor - x45y46z9" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y46z9.c",
  "east" : DIR+"/rooms/x46y46z9.c",
  "south" : DIR+"/rooms/x45y45z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
