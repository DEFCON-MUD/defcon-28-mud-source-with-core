inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 59, 9 }));
  set_short( "Passage - x7y59z9" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y60z9.c",
  "south" : DIR+"/rooms/x7y58z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
