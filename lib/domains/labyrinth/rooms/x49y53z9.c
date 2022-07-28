inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 53, 9 }));
  set_short( "Corridor - x49y53z9" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y54z9.c",
  "south" : DIR+"/rooms/x49y52z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
