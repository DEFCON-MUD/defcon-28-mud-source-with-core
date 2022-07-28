inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 53, 1 }));
  set_short( "Hallway - x17y53z1" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y54z1.c",
  "south" : DIR+"/rooms/x17y52z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
