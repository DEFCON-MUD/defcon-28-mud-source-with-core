inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 51, 1 }));
  set_short( "Passage - x9y51z1" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y52z1.c",
  "south" : DIR+"/rooms/x9y50z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
