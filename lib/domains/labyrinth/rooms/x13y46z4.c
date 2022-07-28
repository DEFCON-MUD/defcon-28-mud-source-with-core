inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 46, 4 }));
  set_short( "Passage - x13y46z4" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y47z4.c",
  "south" : DIR+"/rooms/x13y45z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
