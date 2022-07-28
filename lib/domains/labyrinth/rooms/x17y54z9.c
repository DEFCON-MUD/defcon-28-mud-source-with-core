inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 54, 9 }));
  set_short( "Corridor - x17y54z9" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y54z9.c",
  "south" : DIR+"/rooms/x17y53z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
