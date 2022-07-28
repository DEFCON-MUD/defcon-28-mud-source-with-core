inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 7, 0 }));
  set_short( "Passage - x33y7z0" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y8z0.c",
  "south" : DIR+"/rooms/x33y6z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
