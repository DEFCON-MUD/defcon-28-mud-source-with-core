inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 46, 8 }));
  set_short( "Hallway - x37y46z8" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y46z8.c",
  "east" : DIR+"/rooms/x38y46z8.c",
  "south" : DIR+"/rooms/x37y45z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
