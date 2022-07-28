inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 53, 2 }));
  set_short( "Hallway - x3y53z2" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y54z2.c",
  "south" : DIR+"/rooms/x3y52z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
