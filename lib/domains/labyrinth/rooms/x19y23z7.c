inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 23, 7 }));
  set_short( "Passage - x19y23z7" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y24z7.c",
  "south" : DIR+"/rooms/x19y22z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
