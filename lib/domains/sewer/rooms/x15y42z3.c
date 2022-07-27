inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 42, 3 }));
  set_short( "Corridor - x15y42z3" );
set_objects( DIR+"/monsters/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y42z3.c",
  "south" : DIR+"/rooms/x15y41z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
