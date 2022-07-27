inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 45, 6 }));
  set_short( "Corridor - x57y45z6" );
set_objects( DIR+"/monsters/wellin.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y46z6.c",
  "south" : DIR+"/rooms/x57y44z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
