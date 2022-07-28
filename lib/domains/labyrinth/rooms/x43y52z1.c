inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 52, 1 }));
  set_short( "Corridor - x43y52z1" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y52z1.c",
  "north" : DIR+"/rooms/x43y53z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
